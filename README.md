# PMLibrary Unreal Plugin
Useful C++/Blueprints Library for Unreal Engine 5

Supproted version 5.5

## Introduction
[MetaPlayer]  
MetaPlayer is a plugin based on WMF Player that plays multiple videos in sync. Since Unreal cannot play videos with a resolution exceeding about 8K, it is designed to split the video into several pieces and import them into Unreal so that the videos can be played in sync.

[MetaToolkit]  
This plugin aims to create several tools that allow you to easily change various settings.

[MetaVFX]  
MetaVFX is designed to provide easy access to a wide range of effects that can be used in media art.

## Setting
1. Place the plugin you want to use in the Plugins folder (if it does not exist Plugins folder, create Plugins folder) inside the Unreal project folder.
   
2-1. When using in Blueprint, run the project and check the plugin.
![Image](https://github.com/user-attachments/assets/ea65bbb5-eb7e-4e41-9e95-b37d76b6b159)

2-2. When used in C++ code, add the plug-in name to DependencyModuleNames in the project's build.cs, and then build and run the project.
![Image](https://github.com/user-attachments/assets/5ac708fc-8e83-4afe-9dba-3a8c929761f2)

# How to use
## [MetaPlayer]
1. MultiMediaSyncPlayer
  - Insert desired video into the file media source.
  - Check if the video loops
![Image](https://github.com/user-attachments/assets/af7437e7-d512-4d9c-9810-1a761b31855d)

  - After you prepare the video, you can play it whenever you want or play it immediately. (Caution: There will be a delay if you play it right away without any preparation.)

 2. Display
 2-1. UI
  - Create a blueprint that inherits DisplayWidget.
  - Place a panel widget that inherits the UPanelWidget(ex. GridPanel, HorizontalBox...) and rename to DisplayPanel.
  - Create as many images as the number of file media sources entered in MultiMediaSyncPlayer as children of the DisplayPanel.
![Image](https://github.com/user-attachments/assets/d031b4ab-abd4-4b6d-8883-80070164f427)

  - Create widget and add to viewport.
  - Outputting video using the SetMediaTexturesDisplayMaterials function. (Note: MultiMediaSyncPlayer must be ready or playing)
     
 2-2. 3D Actor
   - Placing a DisplayActor into the world.
   - Create a plane component as a child of ArrowComponent equal to the number of file media sources entered in MultiMediaSyncPlayer.
![Image](https://github.com/user-attachments/assets/9f4f9d69-a325-4c1d-a870-603214e29bfd)

   -  Set each plane to the desired position and size.

## [MetaToolkit]
1. MTKWidget
   - The MTKWidget is a widget that inherits Usetwidget and displays the mouse cursor based on the Unreal viewport position.
   - To fit the mouse cursor position to the viewport, you can inherit MTKWidget and use it.

2. MetaGraphicsSettingsComponent
   - Add MetaGraphicsSettingsComponent to Player Controller.
![Image](https://github.com/user-attachments/assets/094ff63d-8b9b-4f42-86fd-0e5238fe271c)

   - To show it, call ShowGraphicsSettingsUI on the component, to hide it, call HideGraphicsSettingsUI.
![Image](https://github.com/user-attachments/assets/9d273e1c-899f-4270-875b-7367bb1630ce)

   - Play the game and configure the settings after displaying the UI.
![Image](https://github.com/user-attachments/assets/978c6027-e7ab-4f28-a427-b5db01b9a555)

   - You must click the 'Apply' button to save the converted settings.

## [MetaVFX]  
1. MetaMagicTrail
  - Add MetaMagicTrailManager to playercontroller.
![Image](https://github.com/user-attachments/assets/052cc2c0-1f67-4473-9130-f66837d82acb)

  - Bind events to turn the UI on/off
  - Masking can use video files and image files.
![Image](https://github.com/user-attachments/assets/cb41fc0a-b8c6-496b-a105-134961b3b542)

  - Edit UI allows you to modify data even after a build.
![Image](https://github.com/user-attachments/assets/e6452028-e719-4fc8-ad2b-b5199e3b0868)

  - Settings
![Image](https://github.com/user-attachments/assets/340d9706-dbf3-4398-861c-c7b2a5cb2fd0)
  * Init Create Pool Num: Determines how many objects will be created when the game starts. Niagara system actors will be used for interactions based on the object pool.
  * Particle Activation Threshold Sec: When an interaction is detected, a particle is generated after this amount of seconds.
  * Reset Time: How often will all interactions be cleared every second. (to prevent sensor, internet, focusing issues, etc.)
  * Use Mouse: Whether to allow mouse interaction.
  * Use Ray: Whether to use Linetrace. (if false, create it directly at the screen position)
  * Use Edit UI: Whether to use the UI. (if ture, use the saved values ​​instead of the values ​​set in the Editor)
   
2. MetaFluidArt
2-1 MefaFluidArtManager
  - Add FluidArtManager to playercontroller.
![Image](https://github.com/user-attachments/assets/836c6853-e247-4497-aafc-f0cfd7c4e8c0)

  - Bind events to turn the UI on/off
  - Place actors that can collide with the ray in appropriate locations.

  - Settings
![Image](https://github.com/user-attachments/assets/1280de16-f2a8-4f36-8ed7-d7d9bc64ee64)
  * Interaction Scale: The size of the interacting sphere.
  * Scale Increase Time: The time it takes for the interaction sphere to grow from 0 to the interaction scale.
  * Scale Decrease Time: The time it takes for the interaction sphere to decrease to 0 on the interaction scale.

3-1. MetaFluidArtActorComponent
  - Add a MetaFluidArtActorComponent to the activity you want to place in the world.

  - Settings
![Image](https://github.com/user-attachments/assets/3f1b3615-b336-49e6-b917-840d9c02adfd)
  * Using Force can accentuate rendering alignment issues caused by overlapping particles, but the basic fluid motion is more natural.
  &#8251; The noise category applies when Force is not used.
  * Collider Visible: Visibility of the collider causing the noise.
  * Duration: The time during which noise.
  * Collider Num: Number of colliders.
  * Noise Collider Scale: The size of the collider that generates noise.
  * Start Location Offset: The start location offset of the collider in the area.
  * Noise Range: The area where noise occurs.
  * Min Length: The minimum length the collider must move.
  * Max Length: The maximum distance the collider can move.

![image](https://github.com/user-attachments/assets/830c66f8-ffe9-4636-aca1-c408590e43d2)
  * Num Cells Max Axis : Number of axes. (the higher the number, the more densely the particles are placed)
  * Particle Per Cells: Number of particles per cell (the higher the number, the more particles there are, filling up empty space.)
  * Pressure Iterations: The number of times the water pressure is calculated per second.
  * Sprite Scale: The size of the particle.
  * Texture: Base image
  * Texture Change Delay: The time it takes for a particle to be created and a new particle to be recreated (previously created particles will soon be destroyed).
  * UV Step: Adjust the UV values ​​of the texture (to solve the problem of UV being slightly cut off depending on the value of Num Cells Max Axis)
  * World Grid Extents : X - Depth // Y - Width // Z - Height (Set Y and Z to match the UV values ​​of the texture)
