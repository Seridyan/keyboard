Software Preparation

The recommended programming tool for the XIAO RA4M1 is the Arduino IDE, so as part of the software preparation, you will need to complete the Arduino installation.
tip

If this is your first time using Arduino, we highly recommend you to refer to Getting Started with Arduino.

    Step 1. Download and Install the stable version of Arduino IDE according to your operating system.

        [Download Arduino IDE](https://www.arduino.cc/en/software)

    Step 2. Launch the Arduino application.

    Step 3. Add RA4M1 board package to your Arduino IDE.

       Navigate to File > Preferences, and fill "Additional Boards Manager URLs" with the url below: https://files.seeedstudio.com/arduino/package_renesas_1.2.0_index.json

       Navigate to Tools > Board > Boards Manager..., type the keyword RA4M1 in the search box, select the latest version of Seeed Renesas Board, and install it.

    Step 4. Select your board and port.

      On top of the Arduino IDE, you can search for xiao in the development board on the left, select XIAO_RA4M1, and select the port directly.
      
    Step 5. More details in the following link:
    
      https://wiki.seeedstudio.com/getting_started_xiao_ra4m1/
