## Prepping a Laser Cutting File (Before Appointment) 

1. A laser cutting Rhino file must have the following settings:
Units set to Inches 
  * Use "units" command to change file units 
  * Layers set correctly 
    * Red / Cut – these lines will cut completely through material 
    * Color: RGB R=255, G=0, B=0 
    * Linewidth: Hairline 
  * Blue / Etch – these lines will partially cut into material  
    * Color: RGB R=0, G=0, B=255 
    * Linewidth: Hairline 
  * Black / No Print – these lines are used for outlines, guides, and other notes that will not be cut 
    * Color: RGB R=0, G=0, B=0 
    * Linewidth: No Print
  
*Students are encouraged to use the Laser Cutting Template (LINK) Rhino File with these settings already loaded*

 

All linework in a laser file must have: 

All linework nested into 32 in x 20 in printing bed windows 

Use the Black / No Print layers for the printing bed window 

Create one printing bed window for each sheet of material to be used 

If using material smaller that 20 in x 32 in, create an outline at the top left corner of the printing bed window 

Use the gumball to move and orient your linework to maximize space used in each printing bed window 

All linework drawn flat on CPlane  

Check in "front" or "right/left" view 

If misaligned, use "align" command 

All continuous linework joined  

Use "selcolor" and "join" commands 

No duplicate lines 

Use "seldup" command and delete any duplicate lines 

 

Cut time estimator 

Before your appointment, students can use the following process to estimate the time each sheet of material will take: 

Select the lines on the sheet and use "length" command  

Use "calc" command to open the Rhino Calculator or use other calculator available 

Enter the number from your length measurement (must be inches) and divide by 120  

Ex: 600 / 120 = 5.5   

Estimated runtime = ~ 5.5 minutes  

Note: Cut time varies greatly based on cut material. This calculation is not an exact representation of cut time, but a rough estimate. 

 

Setting Up a Laser Cutting File (During Appointment) 

Open your laser cutting file in Rhino on the designated laser computer 

Double-check the file and linework settings from the "Prepping a Laser Cutting File" section (ask a student worker for assistance if needed) 

 

Rhino Print Settings 

Use "print" command to open print settings 

"Destination" settings: 

Check that the correct laser is selected from the top drop-down menu 

"Output Type" is "Vector Output" 

"Output Color" is "Display Color" 

Select "Properties" to go to the Epilog settings window 

 

Epilog Laser Settings  

Click the "Advanced" tab from the top bar 

Select your chosen material and thickness from the list 

If uncertain of material thickness use lab calipers to measure it before selecting material 

Once material is selected, click "Load" 

Click "OK" to close out of the Epilog window and to go back to the Rhino print settings 

 

Rhino Print Window 

"View and Output Scale" settings: 

"Scale" is set to "1:1" 

Select "Window" and click "Set" button 

You will be sent into your Rhino screen with a 32 in x 20 in outlined print window 

Use "Move" command to select the top left corner of the print window and place it at the top left corner of your printing bed outline 

Clicking the window points without using "Move" will scale the window – if you accidentally scale the window, escape back into the print settings and click "Set" again) 

Once the window is in the right location, hit the enter key to go back to print settings 

Check that all Cut and Etch lines appear in the preview window on the right. 

If any lines are missing, it is because the linework is not recognized – review the "Prepping a Laser Cutting File" settings 

Now the that the first cut is set, click "Print" to send it to the laser cutter 

Before running the first cut on new material, students should run a test cut on the new material 

 

Test Cut 

Test cuts are essential for successful laser cutting – laser settings wear out over time and will not always cut through material. Take 2 extra minutes to make a test cut to ensure material will cut through completely. 

Once the Rhino Print Settings, Epilog Print Settings, and Rhino Print Window are set, escape back into your Rhino file (all print settings will be saved) 

Using the same printing bed window used in the first cut file, create a small rectangle on the Red / Cut layer in an offcut location and another on the Blue / Etch layer (if using) - these rectangles are the test cut 

Select test cut rectangles and use "Invert" command to select all other linework in the file 

Use "Hide" command to hide all other linework except for the test cut rectangles 

Use "Print" command to return to the Rhino Print Settings 

Confirm that all settings are the same and that only the test cut rectangles appear in the preview window 

Click "Print" to send the test cut to the laser cutter 

 

Starting Laser Cutting Files on the Laser Cutter 

Confirm that the laser cutter and air compressors are on 

 

Load in material aligned to the top left corner of the printing bed 

Ensure that the material is lying flat on the printing bed 

 

All print jobs will show up on the laser cutter screen in the order that they are sent 

When you click "Print" in the Rhino Printing Settings, the print job will be sent to the laser cutter – this can take a minute depending on the amount of linework in the file 

The laser cutter screen will show an estimated time for each print job, confirm that you have enough time left in your appointment before starting the job 

Check that the print job on the screen is correct  

A test cut file might be Job 2 while the first cut file is Job 1 – make sure to keep track of the files you send to the laser cutter 

 

Press "GO" button to start cutting the file 

Students can run the file without the laser to check alignment by leaving the laser door open and pressing "GO" 

 

Students must stay at the printer while a file is cutting and cannot leave it unattended 

When finished, open the laser door and tape / remove all pieces before loading in the next sheet of material or finishing an appointment 

 

If running print files on multiple sheets of the same material with the same thickness, set up the next print job from "Rhino Print Window" step (only one test cut necessary) 

 

If running print files on different material, set up the next job from "Setting Up a Laser Cutting File" step (run a test file on every new material and / or new thickness used) 

 

Cleaning Up (End of a Laser Cutting Appointment) 

Make sure all pieces are removed from laser cutter bed 

 

Clean up any scraps / debris at laser cutter station 

 

Quit out of your laser cutter file on Rhino 

 

 
