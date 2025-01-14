# PART 2: How to Run a Job on Carvey Using gSender  

To begin this process, you must have three things prepared: (1.) stock material (shop-approved foam), (2.) a laptop with gSender installed and USB-A (standard) compatibility, and (3.) the .nc file from Part 1 saved on that laptop.  

IMPORTANT REMINDERS:  

* If it is your first time using Carvey, you MUST follow this procedure with a staff member or qualified student worker in order to be trained on the machine. 

* Even if it is not your first time using Carvey, a staff member or qualified student worker must double check your CAM programming and setup and be present with you in order to start any cut. 

## 1. Stock Setup 

Stock can be held down with either double-stick tape or reusable, screw-in, hold-down shims which are stored in the Carvey toolkit.  

In any case, make sure the bed is clean and that the piece is held down squarely and firmly. 

![6_stock_setup](https://github.com/user-attachments/assets/d0d6fd4b-844d-4120-94c5-bd5591019ffd)

You can use the grid lines on the bed to ensure that your piece is oriented properly (square) on the machine. (see below) 
 
![4_stock_loaded](https://github.com/user-attachments/assets/7f54b4fe-9367-44c6-858b-407671da50f5)

## 2. Loading A Tool 

Select the correct sized collet for the diameter of the tool you will use. 

![2_collet](https://github.com/user-attachments/assets/5bfee1a8-8b22-4ddc-a0ea-44e5fec2f89c)

Make sure to load the tool to the correct length (no shorter than the "tool length" you set when programming your file). 

![3_load_tool](https://github.com/user-attachments/assets/0bd47c69-29b5-4812-906f-932d2817a253)

Then use the two wrenches from the Carvey toolbox to secure the tool in the spindle. 

## 3. Connecting to Carvey 

Plug the USB cord into your laptop and turn the machine on. 

Open gSender. In the top left corner of the screen, click the dropdown box that says "Connect to Machine" and select the device (there should only be one to choose from). 

If you have difficulty connecting to the machine, alert a staff member and we can help you troubleshoot. 

![1_gsender_open](https://github.com/user-attachments/assets/78988531-0897-497e-9405-56887921f450)

## 4. Unlock Machine 

Carvey is only operational when the door of the machine is fully closed. Every time the door is opened, you must re-establish connection between Carvey the machine and gSender, the driver or "remote control" system that operates it.  

To do this, with the door closed, first press the blue button on Carvey (pictured below) 

![5_stock_loaded_blue_button](https://github.com/user-attachments/assets/0387fd4c-6126-48f3-89d1-51db1d18750a)

Next, unlock the machine controls in gSender by clicking the brown unlock button near the upper left corner of the screen. When connection is established and gSender is unlocked, you can then jog, set zero, navigate to zero, and run jobs. 

![2_connect_and_unlock](https://github.com/user-attachments/assets/247372f4-0bf3-48ec-b66e-dcca4e57f7e6)

## 5. Setting X, Y, and Z zero 

Using your computer keyboard (and the shortcuts you set up from the [gSender Configuration Best Practices](https://digitalfabricationlab-nyit-soad.github.io/resources/Tutorials&Templates/Carvey/gSenderConfig/) guide), navigate the tool to where you want the origin of your part to start. Remember: this is where the WORK ZERO coordinates system was placed in Step 3 of Part 1 (Southwest, highest Z).  

Be careful not to plunge the tool into your stock! 

![7_set_part_zero](https://github.com/user-attachments/assets/46b1a184-c8f3-453d-b8b3-957b3666ef67)

Note that we are zeroing the tool at a location set into the stock a bit and not at the exact corner of the foam. This is because we will trim out the object on the band saw later to give it cleaner edges. Double check your stock and object measurements to ensure that you are placing the origin of your part appropriately, so your object fits within your stock on all sides. 

 

When you are satisfied with the location of your tool/part origin, click "Zero X," "Zero Y," and "Zero Z" (or "Zero All") to set this location as zero. 

![3_stock_location_set_zeroes](https://github.com/user-attachments/assets/7d46f2a8-97f7-4cb4-9e87-982cd1f0d2bb)

## 6. Load File 

Click "Load File" at the lower left corner of the window and select the gcode (.nc file) you posted from FreeMILL 

![4_load_file](https://github.com/user-attachments/assets/a0f2a2cc-167d-44af-bc79-ed071fda8c38)

## 7. Start Job 

Double check that the toolpaths that appear in gSender's 3D preview window look like the toolpaths that were generated in FreeMILL and that they start at X, Y, Z zero. 

Then click "Start Job"! 

![5_start_job](https://github.com/user-attachments/assets/5a1fe898-7c6b-4148-8c99-45ec21f4889a)

## 8. Running 

Congrats! You're now cutting with Carvey Mini CNC! 

![8_running](https://github.com/user-attachments/assets/873a45fb-644e-4393-853f-a17f40ae1e9f)

This is what gSender will look like while you are cutting:  

![6_running](https://github.com/user-attachments/assets/4003fa1d-2a76-4576-8346-59587f0ea0d7)

## 9. File Complete 

When your file is finished cutting, the tool will move back to the origin and you will see this pop-up window: 

![7_complete](https://github.com/user-attachments/assets/51387284-2a4b-4a13-8785-3b32fdab931b)

Jog the tool out of the way, then open the door to retrieve your part. 

![9_clean_up](https://github.com/user-attachments/assets/7ab02113-e6a0-4014-a0bd-a33a6c3c53af)

Clean up the interior of the machine using one of the shop vacuums. 

## 10. Finishing/Trimming Your Model 

Here is what the part will look like when it comes off the mill: 

![10_finished](https://github.com/user-attachments/assets/545fdbe2-6bed-4197-9827-69007e5e4e1f)

You can trim the edges using the band saw in the shop: 

![11_bandsaw_trim](https://github.com/user-attachments/assets/cd5897cc-dd0b-4bf2-8dbf-0cee30cb74c1)

...to release the finished product from the original stock foam: 

![12_finished_trimmed](https://github.com/user-attachments/assets/24180e64-8b75-40b7-8a70-d89863115b3e)

Hope you found this guide helpful and *Happy Carving!*  
