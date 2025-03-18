## Hello!

Here is the write up by Elijah Williams for the Wasp Delta 2040 Pro with the custom clay extruding head.

Good luck and have fun!

Note to refer for Cura Settings to update. 

V1 is stored in the Cura Settings folder [Cura Set Up](CuraSettings/).

Setting Up Plunger:

The pluger takes 24v of input power.
Only the Power and Ground Wires need to be wired and they are marked correctly with blue tape.
![PXL_20250318_185950239](https://github.com/user-attachments/assets/d4547665-5117-441b-b087-c6f2b6715fb3)
![PXL_20250318_185918462](https://github.com/user-attachments/assets/b659b0d4-0d5e-4030-85d0-53a477e4a78d)



### There are three settings that combine to make the "speed" at which the plunger moves.

1. Steps or "P": this is fraction so P 64 is faster than P 1. Generally you will need P 32 or 64.
2. Speed: This can be adjusted as a speed from 0 to 300. This is DIRECTLY related to the steps so if the speed is high but step is low, it will move very slowly. Write down what works for your material. You will need to reuse these settings.
3. Direction: Forward and reverse! Set this by pressing the button for the direction you want it to move. Press in the knob and the machine will move constantly.

Material must be loaded into the clear tube and then an extrusion test should be done before preparing a file for extrusion. Remember that the material may dry out and needs to be cleaned directly after use.


Build a new machine profile into cura:
![WASP2040Extruder](https://github.com/user-attachments/assets/f0f48206-fad1-4e55-91fa-17996a01b22d)
![WASP2040Machine](https://github.com/user-attachments/assets/53244032-835f-416c-938d-514df9c212d2)

Install this slicing profile into cura:
[2040](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/blob/main/RobotLab/ClayPrinting/CuraSettings/WASP2040_CLAY.curaprofile)

The machine is up in LDM mode which means it expects to not find a heating element. There is no heating of the head or of the bed. 
You have to set your Z height ( how close the end of the printer should be to your ground surface. 


### Steps for Preparing the file for printing:

1. These steps are untested for clay extrusion, only functioning as a way to get movement patterns onto the machine.
2. Set up Machine Profile (see above) in Cura 5.7.2. Set Material as [generic PLA]. Load our default printer profile (stored in the Cura Settings Folder on this Github)
3. Slice and preview for errors and transfer to USB.

Steps for Operation:

1. Turn on Printer on switch at the back of the machine, confirming the black Ethernet plug at the top of the printer head is connected. There should be no clay pipe or clay itself flowing into the head at this point.
2. Confirm that the auger and motor are attached via ziptie to the chrome printer bracket.
3. Auto Home the machine, bringing it up to it's max height. It will be a little scary but it will not crash!
4. Set the MAX Z Height in the Prepare Sub-Menu to the TOP of your work surface. If you fail to do this, the printer WILL crash into the bed. :/
5. Load your file 
6. Dry run WITHOUT any clay to confirm your Z is set correctly. Stop the print if the first layer looks good.
7. Speed can be edited in TUNE -> Speed. It is a proportion of the speed set by you in CURA. Same with flow, which is a proportion of the (I don't know what but it has to be something). These variables can be edited live to improve flow but should be improved in the slicing profile instead of edited live everytime the machine is set up.

Notes I followed for Cornering Guides etc etc
http://www.keep-art.co.uk/Journal/JK%20Guide%20to%20Clay%203D%20Printing.pdf
