# Kingroon KP3S BLTouch Marlin 2.1.x Nightly Firmware

The latest version of Marlin for the Kingroon KP3S 3D Printer with BLTouch as of Sept 4th 2023. You can either flash the pre-compiled robin_nano.bin, or use the source code in [VS Code](https://code.visualstudio.com/) and compile it yourself. You'll need the [Auto Build Marlin plugin](https://marlinfw.org/docs/basics/auto_build_marlin.html) and [Platform IO plugin](https://platformio.org/install/ide?install=vscode).

[The BLTouch adapter/mount](https://www.thingiverse.com/thing:4658647) for the KP3S is free to print from Thingiverse and the probe offset values have already been pre-set in the firmware for you. You may need to tweak them slightly after flashing using [M851](https://marlinfw.org/docs/gcode/M851.html), but it should already be very close to your actual values.

I'm also using a [Dual Drive Extruder](https://www.aliexpress.com/item/1005003423850142.html?spm=a2g0o.productlist.main.9.4fe934c7NELxAM&algo_pvid=25f03066-ab41-46fe-8e7c-593d69ac4f11&aem_p4p_detail=202309060306123760342858700220003506840&algo_exp_id=25f03066-ab41-46fe-8e7c-593d69ac4f11-4&pdp_npi=4%40dis%21AUD%2123.92%2113.15%21%21%2114.99%21%21%402101ec1a16939947723517437e1259%2112000025721494267%21sea%21AU%212077105477%21&curPageLogUid=8nB29YpWO2RH&search_p4p_id=202309060306123760342858700220003506840_1https://www.aliexpress.com/item/1005003423850142.html?spm=a2g0o.productlist.main.9.4fe934c7NELxAM&algo_pvid=25f03066-ab41-46fe-8e7c-593d69ac4f11&aem_p4p_detail=202309060306123760342858700220003506840&algo_exp_id=25f03066-ab41-46fe-8e7c-593d69ac4f11-4&pdp_npi=4%40dis%21AUD%2123.92%2113.15%21%21%2114.99%21%21%402101ec1a16939947723517437e1259%2112000025721494267%21sea%21AU%212077105477%21&curPageLogUid=8nB29YpWO2RH&search_p4p_id=202309060306123760342858700220003506840_1), which slots into the adapter. I recommend a clear one so you can see if the filament is going all the way through. I'd recommend doing a [E-Steps calibration](https://mattshub.com/blogs/blog/extruder-calibration) after flashing to confirm the E-Steps are correct for *your* extruder.

**Firmware features of note:**

Babystepping is on, use the Tune > Probe Z offset menu mid-print to adjust your Z height in realtime. Get that perfect first layer.



If you have no idea how to dissassemble your printer or compile the firmware yourself, i recommend [Jeff's 3d Corner's](https://youtu.be/t8V_ioDw-fo) videos.
