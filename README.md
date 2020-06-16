# Sample Project (Mac)

This is a sample project. We'll use it to have you:

* practice downloading starter code
* practice downloading data files
* building and running uses VS Code
* running from the command line

## Create a new project

* Find your class folder.
* Double click on the project creation script.
* Enter a project name like: sample_project
* Hit return - the script runs.
* Hit return - the window closes.

## Enter the folder just created using the terminal

* Start up a terminal. You are now in your home directory.
* You are instructed to create your class folder in your home folder so it should be there. Also, you just visited it using the Finder. Suppose you called your class folder `csc1810`. Type the following into your terminal and hit return `cd csc1810`.
* Now, enter the folder containing your freshly made sample project: `cd sample_project`.

## Get the starter code

Copy this whole line and paste it into your terminal. Triple click on the line to easily select the whole line.

```text
wget --no-check-certificate --content-disposition https://raw.githubusercontent.com/pkivolowitz/sample_project/master/main.cpp
```

* The file you just downloaded is called `main.cpp` *but* you already had a `main.cpp` in the folder. Therefore, the new file was automatically renamed to `main.cpp.1`.
* Rename `main.cpp.1` to `main.cpp` by entering this: `mv main.cpp.1 main.cpp` into the terminal and hit return.
