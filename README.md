# 🔢 8051 Seven Segment Counter (Basic)

## 📌 Overview
This project demonstrates a basic interface between the **8051 microcontroller (AT89C51)** and a **7-segment display**.

The microcontroller sends output signals to the display to show numbers using embedded C logic. This project focuses on understanding port output and display control.


## ⚙️ Components Used
- AT89C51 (8051 Microcontroller)
- 7-Segment Display



## 🧠 Working Principle
- The 8051 sends digital output through its port pins.
- Each pin controls one segment (A–G) of the 7-segment display.
- Predefined values are used to display digits.



## 🔌 Circuit Description
- Port pins of the 8051 are directly connected to the 7-segment display.
- Each segment (A–G) is controlled individually by the microcontroller.



## 💻 Software Used
- Keil µVision (for writing Embedded C code)
- Proteus 8 Professional (for simulation)


## ▶️ How to Run
1. Open the project in Proteus.
2. Load the compiled `.hex` file into the 8051.
3. Run the simulation.
4. Observe the output on the 7-segment display.


## 📷 Output
The display shows numeric output based on the program logic.

## 🚀 Future Improvements
- Add resistors for real hardware implementation
- Use crystal oscillator for actual circuit
- Extend to multi-digit display (00–99)
- Add input buttons for control


## 📚 Learning Outcomes
- Basics of 8051 microcontroller
- Understanding of port output
- Interfacing a simple display
- Embedded C fundamentals


Pranav VS  
