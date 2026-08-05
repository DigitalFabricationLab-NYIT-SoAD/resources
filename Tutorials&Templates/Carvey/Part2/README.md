# PART 2: How to Run a Job on Carvey Using gSender  

At this point, students must have the .nc file from Part 1 and their stock material (XPS or HDU foam), cut down (if needed) to a size that will fit in the machine.   

**IMPORTANT REMINDERS:**  

* All first-timers MUST follow the following procedure with a staff member or qualified student worker in order to be trained on the machine. *It is the student's responsibility to alert a staff member to obtain this training.*

* For ALL Carvey jobs, *it is the student's responsibility* to alert a staff member or qualified worker to 1.) **double check CAM programming and setup** before cutting and 2.) **monitor the machine while the job is running.** 

## 1. Stock Setup 

Stock can be held down with either double-stick tape or reusable, screw-in, hold-down shims which are stored in the Carvey toolkit.  

In any case, make sure the bed is clean and that the piece is held down squarely and firmly. 

*Pictured below: stock (XPS foam), double-stick tape.*

![6_stock_setup](https://github.com/user-attachments/assets/d0d6fd4b-844d-4120-94c5-bd5591019ffd)

Use the grid lines on the bed to ensure that the piece is oriented properly (square) on the machine. (see below) 
 
![4_stock_loaded](https://github.com/user-attachments/assets/7f54b4fe-9367-44c6-858b-407671da50f5)

## 2. Power on Carvey, Open CNCjs, Connect to Machine 

Turn Carvey on (switch in the back near where the power cord comes out), the silver connection button on the lower right corner of the machine should be glowing blue. 

Using the Carvey station desktop computer, download then open [v1.11.2 of the CNCjs app](https://github.com/cncjs/cncjs/releases/download/v1.11.2/cncjs-app-1.11.2-windows-x64.exe)  

In CNCjs, find the Connection panel on the left side.  

Under "Port," click the drop-down box and select *COM3 – Manufacturer: FDTI*.  

* Note: If the port doesn't show up, verify the machine is on and click the refresh button (two arrows in a circle) 

Check the box that says " Set DTR line status upon opening" 

Click the blue "Open" button below. The Connection panel should now look like this:

<img width="349" height="420" alt="pt2_2_1" src="https://github.com/user-attachments/assets/57e32da1-e2ff-45e1-89f4-72dd8fc51c77" />


## 3. Unlock Machine 

Initially there will be an error code in the upper left of the screen:

<img width="146" height="37" alt="pt2_3_1" src="https://github.com/user-attachments/assets/24f9cdeb-53f9-46fa-90b1-ba9e602725f3" />

Click the gold unlock button in the upper right corner: 

<img width="330" height="45" alt="3_2" src="https://github.com/user-attachments/assets/ac1acf2a-6de0-4183-a1cc-ad38dcf58793" />

The status should now read "Idle":

<img width="137" height="38" alt="3_3" src="https://github.com/user-attachments/assets/a3022d67-119a-4e9b-ba9a-23ca4b6427cb" />

Now that connection has been established and controls are unlocked so that the machine is in idle, you will be able to jog, set zero, navigate to zero, and run jobs.

There is another status code to know when using Carvey, it looks like this:

<img width="127" height="37" alt="3_4" src="https://github.com/user-attachments/assets/19d55b42-7952-4304-8c8f-bdb1350a80c9" />

Like it suggests, this means that the door is open or has been opened. Carvey will only move when the door of the machine is fully closed and error codes have been resolved.  

To reconnect to CNCjs, make sure the door is fully closed, then press the silver connection button in the lower left corner of the machine and the status should read "Idle" again:

![5_stock_loaded_blue_button](https://github.com/user-attachments/assets/0387fd4c-6126-48f3-89d1-51db1d18750a)

## 4. Configure CNCjs and Home Machine

In the "Axes" panel on the right side, click the "G21 (mm)" drop down and select "G20 (inch)" to set the program to inches.

Click the blue "Homing" button in the upper right and allow the spindle to move to the lower left hand corner of the spoil board. 

When the machine stops moving and homing is finished, the Axes panel on the right side of the screen will look like this:

<img width="349" height="388" alt="4_1" src="https://github.com/user-attachments/assets/0d600890-9cf5-4e9d-bae2-851efa3cb4e1" />

The values in the "Work Position" column may be different than above, but the "Machine Position" values should be the same

You can also select the keyboard icon at the top next to "MDI," which will make it easier to jog the machine with the keyboard arrow keys.

## 5. Setting X, Y, and Z Zero

Before starting the file, we will manually tell the machine where the material has been placed on the spoilboard. To do this, we will *jog* (move the bit without cutting material) the tool to corner of the stock (or the corner of the start of the geometry within the stock) and then save this location as zero in the "Work Position" column of CNCjs. 

The drop-down bar underneath the units drop-down bar ("G20 (Inch)") determines how far the tool will move with each click. ***Set this to 0.1 in when moving in the X or Y axis. Set to 0.01 in when moving in the Z axis.*** You can adjust this value quickly by using the + - keys below. 

*IMPORTANT: Failing to change this value from the program default or to adjust when moving the bit up and down (Z axis) can cause you to overshoot and crash the machine, something we want to avoid!*

Using the computer keyboard (hover over keyboard icon to view shortcuts), and without crashing the tool into the material, spoilboard, or sides (limits) of the machine itself, navigate the tool to where you want the origin of your part to start.

Remember: this is where the WORK ZERO coordinates system was placed in Step 3 of Part 1 (Southwest, Highest Z).

![7_set_part_zero](https://github.com/user-attachments/assets/46b1a184-c8f3-453d-b8b3-957b3666ef67)

The red rectangle indicates where our part will fit within our (intentionally slightly oversized) stock material.

In this example, we are not zeroing the tool at the exact corner of the foam because we are planning to trim out the object on the band saw later to give it cleaner edges.

Always double check your stock and object measurements in Rhino to ensure that the origin is situated appropriately, so your object fits within your stock on all sides.

When you are satisfied with the location of your tool over the part origin, click the drop-down arrow next to "Work Position" and click "Zero Out Work Offsets (G10 L20 P1 X0 Y0 Z0)"

<img width="347" height="396" alt="5_1" src="https://github.com/user-attachments/assets/869497d1-ffc5-43be-823d-8438cc714353" />

The values in the Work Position column should now read 0, 0, 0:

<img width="327" height="218" alt="5_2" src="https://github.com/user-attachments/assets/19e0dd99-04f8-4232-8fc6-7428730e42cf" />



## 6. Load File 

Click the blue "Upload G-code" button at the upper left corner of the window and select the gcode (.nc file) you posted from FreeMILL 

<img width="300" height="200" alt="pt2_6" src="https://github.com/user-attachments/assets/b853fdbe-f36f-41f8-b042-4a0474eb88bf" />


## 7. Start Job 

Use the icons in the lower left of the 3D preview window to change your view of the toolpaths: 

<img width="725" height="331" alt="pt2_7" src="https://github.com/user-attachments/assets/c0d55062-e707-4ee2-b280-747db1e07251" />

Double check that the toolpaths that appear in CNCjs's 3D preview window look like the toolpaths that were generated in FreeMILL and that they start at X, Y, Z zero.

Then click play! 

<img width="1057" height="627" alt="pt2_7_2" src="https://github.com/user-attachments/assets/5fe3e675-e94f-45a4-8fa2-9d513355c136" />


## 8. Running 

Congrats! You're now cutting with Carvey Mini CNC! 

![8_running](https://github.com/user-attachments/assets/873a45fb-644e-4393-853f-a17f40ae1e9f)

This is what CNCjs will look like while you are cutting:  

<img width="1451" height="726" alt="7_3" src="https://github.com/user-attachments/assets/2315e44c-0ae6-42d4-a18d-8bcfdb141490" />

NEVER open the door while the machine is running: 1.) It could be dangerous and 2.) You will lose progress in your cut and have to start over. Instead press pause if you see an issue and alert a staff member for help.


For safety reasons, students must stay with the machine the entire time the job is running. If there is a problem or emergency, press pause *first*, then alert a staff member

## 9. File Complete 

When your file is finished cutting, the tool will move back to the origin you set, bit will stop spinning and the status in the upper left will return to "Idle." 

This means it's now safe to open the door and retrieve your part.
 
![9_clean_up](https://github.com/user-attachments/assets/7ab02113-e6a0-4014-a0bd-a33a6c3c53af)

Don't forget to **clean up the interior of the machine** using one of the shop vacuums and **put away all tools** when finished. 

## 10. Finishing/Trimming Your Model 

Here is what the part will look like when it comes off the mill: 

![10_finished](https://github.com/user-attachments/assets/545fdbe2-6bed-4197-9827-69007e5e4e1f)

You can trim the edges using the band saw in the shop: 

![11_bandsaw_trim](https://github.com/user-attachments/assets/cd5897cc-dd0b-4bf2-8dbf-0cee30cb74c1)

...to release the finished product from the original stock foam: 

![12_finished_trimmed](https://github.com/user-attachments/assets/24180e64-8b75-40b7-8a70-d89863115b3e)

We hope you found this guide helpful and *Happy Carving!*  


[back to top](https://digitalfabricationlab-nyit-soad.github.io/resources/Tutorials&Templates/Carvey/Part2/)
