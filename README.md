<div align="center">

<br>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=600&size=32&duration=2600&pause=1000&color=FFFFFF&center=true&vCenter=true&width=850&lines=DEAD+FILE+FINDER" alt="Dead File Finder"/>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=400&size=15&duration=2100&pause=750&color=D4D4D4&center=true&vCenter=true&width=900&lines=%24+select+folder;Scanning+files...;Analyzing+file+information...;Potential+dead+files+found." alt="Dead File Finder workflow"/>

<br><br>

</div>

---

## About

> *Inspect your files before deciding what stays.*

Dead File Finder is a C++ command-line utility that lets users select a folder and inspect the files stored inside it.

The program analyzes basic file information, identifies potential cleanup candidates, and allows the user to decide whether a selected file should be kept or deleted.

<br><br>

---

## Features

> *From folder selection to file cleanup, all through the command line.*

* **Folder Selection**
  Enter any folder path from your computer and check whether it exists.

* **File Scanning**
  Scan the selected folder and display the files and folders inside it.

* **File Information**
  Display the file name, extension, size, and word count.

* **File Analysis**
  Analyze basic file properties and classify files as empty, large, or normal.

* **Cleanup Candidates**
  Identify files that may be worth reviewing based on their properties.

* **File Deletion**
  Select a file and permanently remove it from the selected folder.

* **Error Handling**
  Handle invalid paths and filesystem errors without unexpectedly crashing the program.

<br><br>

---

## Built With

> *Built from the ground up with core C++ concepts.*

<div align="center">

`C++`    `Object-Oriented Programming`    `Filesystem & File Handling`

</div>

<br><br>

---

## Run Locally

> *Compile the source and run the utility directly from your terminal.*

**Clone**

```bash
git clone <your-repository-url>
cd Dead_File_Finder
```

**Compile**

```bash
g++ -g src/main.cpp src/File.cpp src/Folder.cpp src/Scanner.cpp src/Analyzer.cpp -o main.exe
```

**Run**

```bash
.\main.exe
```

<br><br>

---

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=400&size=14&duration=2800&pause=1300&color=D4D4D4&center=true&vCenter=true&width=600&lines=Find+what+you+no+longer+need." alt="Closing animation"/>
