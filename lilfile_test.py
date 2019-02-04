import subprocess, argparse
import sys
import fileinput
from subprocess import Popen
from os import listdir, remove
from os.path import isfile, join, abspath


if __name__ == "__main__"
    #Initializing the Parser
    Arguments = argparse.ArgumentParser (description = "LIL File Encoder")

    #Adds positional parameters necessary
    Arguments.add_argument('-o', metavar = "originalfile", nargs = '+', type = str, help= "The file before encoding")

    #Parse the arguments
    Args = Arguments.parse_args()

    if (Args.o != None):
        org_exists = True # to b changed
        org = Args.o[0]
    else:
        print ("Missing original file!")
        
if not org_exists:
    sys.exit()

command1 = "lilfile -e " + org + " encodedfile.txt"
command2 = "lilfile -o encodedfile.txt new_org.txt"

Speed_1 = subprocess.check_output(["time", "lilfile", "-e", org, "encodedfile.txt"])
Speed_2 = subprocess.check_output(["time", "lilfile", "-d", "encodedfile.txt", "new_org.txt"])

print "Encoding fininshed in " + Speed_1 + "\n"
print "Decoding fininshed in " + Speed_2 + "\n"
Shell_Output = subprocess.check_output(["diff", "-s", "org.txt", "new_org.txt"])
print (Shell_Output)


