import os
import sys
import subprocess
import winreg


PROJECTDIR = "@Last Stand Unit Dev"

def main():
    FULLDIR = "{}".format(PROJECTDIR)

    print("""
Привет, это скрипт создат ссылку на мод в директорию армы.
Путь ссылки: 
[Arma 3 installation directory]\\{} => Папка с проектом
        """.format(FULLDIR))

    try:
        reg = winreg.ConnectRegistry(None, winreg.HKEY_LOCAL_MACHINE)
        key = winreg.OpenKey(reg,
                             r"SOFTWARE\Wow6432Node\bohemia interactive\arma 3")
        armapath = winreg.EnumValue(key, 1)[1]
    except:
        print("Ошибка при поиске пути установки Армы в регистре.")
        return 1

    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))

    print("# Найдиные пути:")
    print("  Arma Path:    {}".format(armapath))
    print("  Project Path: {}".format(projectpath))

    repl = input("\nВсе пути правильные? (y/n): ")
    if repl.lower() != "y":
        return 3

    print("\n# Создаем ссылки ...")

    if os.path.exists(os.path.join(armapath, PROJECTDIR)):
        print("Сыылка в директории армы уже существует.")
        return 5

    try:
        subprocess.call(["cmd", "/c", "mklink", "/J", os.path.join(armapath, PROJECTDIR), projectpath])
    except:
        raise
        print("Что-то пошло не так во время создания ссылки, сделайте это вручную.")
        return 6

    print("# Сыылки созданы.")

    return 0


if __name__ == "__main__":
    exitcode = main()

    if exitcode > 0:
        print("\nОшибка во время установки.")
    else:
        print("\nУстановка прошла успешно.")

    input("\nPress enter to exit ...")
    sys.exit(exitcode)
