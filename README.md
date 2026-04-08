This project demonstrates how to control the sound intensity of a buzzer using PWM (Pulse Width Modulation) with an Arduino. A potentiometer is used as an input device to vary the output signal, allowing real-time adjustment of the buzzer sound.
 Components Required
Arduino Board (Uno, Nano, etc.)
Potentiometer
Buzzer (Active or Passive)
Jumper Wires
Breadboard
 Circuit Description
The potentiometer is connected to analog pin A0.
The buzzer is connected to digital PWM pin 9.
As the potentiometer is rotated, it changes the analog input value (0–1023), which is mapped to a PWM output range (0–255).
 Code Explanation
analogRead() reads the potentiometer value.
map() converts the input range (0–1023) to PWM range (0–255).
analogWrite() sends the PWM signal to the buzzer.
delay(10) ensures stable and smooth operation.
Rotate the potentiometer.
Arduino reads the varying voltage.
The value is converted into a PWM signal.
The buzzer sound changes accordingly.
 Key Concepts
Pulse Width Modulation (PWM)
Analog to Digital Conversion (ADC)
Real-time signal control
Applications
Volume control systems
Alert systems
Interactive electronics projects
Sound-based feedback devices
 Future Improvements
Add frequency (pitch) control using tone()
Display values on LCD/OLED
Use multiple buzzers for different tones
