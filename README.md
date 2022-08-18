# embedded_android

##Android Window
  * A window is a Rectangular area which has aone view heirarchy.
  * it has single surafce.
  * A window is basically like you think of a window on the desktop. It has a single Surface in which the contents of the window is rendered. 
    An application interacts with the Window Manager to create windows; the Window Manager creates a Surface for each window and gives it to the 
    application for drawing. The application can draw whatever it wants in the Surface; to the Window Manager it is just an opaque rectangle.
 
 
 
##Surface
  * A Surface is an object holding pixels that are being composited to the screen.
  * Every window you see on the screen (a dialog, your full-screen activity, the status bar) has its own surface that it draws in to, 
    and Surface Flinger renders these to the final display in their correct Z-order. 
    
    
    
##Surface Flinger
 * surface flinger is compositing the screen using the last buffer, without needing to wait for the application to finish drawing.


##Bitmap
 * A Bitmap is just an interface to some pixel data. 
 * The pixels may be allocated by Bitmap itself when you are directly creating one, or it may be pointing to pixels it doesn't own such as what internally    happens to hook a Canvas up to a Surface for drawing. (A Bitmap is created and pointed to the current drawing buffer of the Surface.)


#NOTES
1. A canvas operates on a Bitmap,  
   Surface gives you a Canvas
   Surface > Canvas > Bitmap

2. 

##Refrences
 * https://stackoverflow.com/questions/4576909/understanding-canvas-and-surface-concepts
