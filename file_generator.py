import argparse
import sys
import fileinput
from subprocess import Popen
from os import listdir, remove
from os.path import isfile, join, abspath


if __name__ == "__main__"
    #Initializing the Parser
    Arguments = argparse.ArgumentParser (description = "LIL File Encoder")

    #Adds positional parameters necessary
    Arguments.add_argument('-n', metavar = "number", nargs = '+', type = str, help= "Number of files to generate")
    Arguments.add_argument('-s', metavar = "size", nargs = '+', type = str, help= "Size of files to generate (in words)")

    #Parse the arguments
    Args = Arguments.parse_args()


NumberOfFiles = Args.n[0]
SizeOfFiles = Args.s[0]

for i in range(NumberOfFiles):
    New_Filename = "org_" + i + ".txt"
    in_file = open (New_Filename, "w")
    #### Implement later ... ... ... ... ...
