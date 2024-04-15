# ECE 484 Project 1 - Chip Interfacing

## Introduction
This project had the goal to interface with a selected chip, in this case a USB. A simple LCD Arduino circuit was created for this project and a written C code was uploaded on to the microcontroller with the USB chip to demonstrate its use.

---

## Components
* USB Chip: SH-U09C to TTL Serial Adapter w/ FTDI
* Installed IDE
* Python and AVR-GCC installed and added to your path
* Git Installed

* Arduino Kit for creating low voltage circuits
* Specifically for this circuit: 1 Arduino microcontroller, 1 LCD display, 21 wires, 1 220 Ohm resistor, 1 SH-U09C USB

* Clone and utilizing the repository

---

## Software
First, installing all necessary software for utilizing the Arduino and USB.

### Installing IDE
If a preferred IDE is known then you can use that, the following link is for VSCODE: https://code.visualstudio.com/Download

IDEs or Integrated Development Environments are software applications designed for creating, executing, and debugging your codes.

### Installing Python
Use the following link to install Python: https://www.python.org/downloads/

Adding it to your path: 
Adding a variable to your path means your system can now access that component from anywhere. A guide on how to do this is descirbed below.

### Adding a variable to your path
* Install the variable you are adding to your path 
* Open your downloads section on your device
* If that file is a ZIP, extract all components of that ZIP
* In the search bar for your device type: "Edit the system environment variables", this is under your control panel
* Once there, click on the "Enironment Variables" button
* Next, go into the "System varaibles" section and select "Path", then click edit
* This will open your files, locate the files you want to add to your path (the extracted ZIP files)
* Copy the path your computer takes to get to those files, this line of text is the "path" your device takes to reach these files in its data
* Return to the "Exviornment Variables" location and click "New", then paste the copied path to your files
* After they have been copied, click "ok" and close the window

### Installing AVR-GCC
Use this link to install the version used in this project: https://github.com/ZakKemble/avr-gcc-build/releases

AVR-GCC is a compiler designed for the coding language C. It will allow you to use C code to interface with an Arduion without using an Arduino IDE or coding language.

### Installing Git
Use this link to install Git: https://git-scm.com/downloads

---

## Circuit
I have schematics of both the LCD and USB in the WIKI. There is also a DEMO video available there for completing the circuit.

Other circuits and code are able to be uploaded using the USB chip as well.

---

## Clone and Using the Repository
The final step is taking the files from Github and installing and using them on your device. The following steps will show you how to do this:

* In your device's search bar type "cmd", this will open your command prompt
* Locte the folder you would like to paste the cloned respoitory to, you can navigate your files by typing "cd" then the file name
* Click on the rectangular green "<> Code" button, then copy the supplied link
* Then in the command prompt type "git clone" then the github link provided from the previos step

After this you will need to open your installed IDE and change the path within. It will state a path, change it to the path you would like to use followed by a "/bin/".

---

## Running the program
In order to run everything above connect the USB chip to your device. This should give power to your device at the very least. The open your command prompt and locate the correct file. Then type "python compile_script.py 4".
