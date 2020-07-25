#!/usr/bin/env python3

#######################
#  ACE3 Setup Script  #
#######################

import os
import sys
import shutil
import platform
import subprocess
import winreg

######## GLOBALS #########
PROJECTDIR = "lsu"
CBA = "P:\\x\\cba"
##########################


def main():
    FULLDIR = "{}".format(PROJECTDIR)
    print("""
Привет, это скрипт создат ссылку на мод в директорию армы.
Путь ссылки: 
[Arma 3 installation directory]\\{} => Папка с проектом
P:\\{}                              => ACE3 project folder
  """.format(FULLDIR, FULLDIR))
    print("\n")

    try:
        reg = winreg.ConnectRegistry(None, winreg.HKEY_LOCAL_MACHINE)
        key = winreg.OpenKey(reg,
                             r"SOFTWARE\Wow6432Node\bohemia interactive\arma 3")
        armapath = winreg.EnumValue(key, 1)[1]
    except:
        print("Failed to determine Arma 3 Path.")
        return 1

    if not os.path.exists("P:\\"):
        print("No P-drive detected.")
        return 2

    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))

    print("# Detected Paths:")
    print("  Arma Path:    {}".format(armapath))
    print("  Project Path: {}".format(projectpath))

    repl = input("\nAre these correct? (y/n): ")
    if repl.lower() != "y":
        return 3

    print("\n# Creating links ...")

    if os.path.exists("P:\\{}".format(PROJECTDIR)):
        print("Link on P: already exists. Please finish the setup manually.")
        return 4

    if os.path.exists(os.path.join(armapath, PROJECTDIR)):
        print("Link in Arma directory already exists. Please finish the setup manually.")
        return 5

    try:

        subprocess.call(["cmd", "/c", "mklink", "/J", "P:\\{}".format(PROJECTDIR), projectpath])
        subprocess.call(["cmd", "/c", "mklink", "/J", os.path.join(armapath, PROJECTDIR), projectpath])
    except:
        raise
        print("Something went wrong during the link creation. Please finish the setup manually.")
        return 6

    print("# Links created successfully.")

    return 0


if __name__ == "__main__":
    exitcode = main()

    if exitcode > 0:
        print(
            "\nSomething went wrong during the setup. Make sure you run this script as administrator. If these issues persist, please follow the instructions on the ACE3 wiki to perform the setup manually.")
    else:
        print("\nSetup successfully completed.")

    input("\nPress enter to exit ...")
    sys.exit(exitcode)
