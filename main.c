#include <kipr/wombat.h>

int main()
{
    
    shut_down_in(90000);
    //first set variables
    int up1 = 1538;
    int up2 = 291;
    
    
    //enable everything
    create_connect();
    enable_servos();
    
	//Lift scoop and wait 2 seconds
    set_servo_position(0,up1);
	set_servo_position(2,up2);
    msleep(2000);
     
    //turn left 
    create_drive_direct(-500,0);
    msleep(1000);
    
    
    //go forward
    create_drive_direct(-100,-100);
    msleep(500);
  
    //go right
    create_drive_direct(0,-500);
    msleep(1000);
    create_drive_direct(0,0);
    
    //put down scoop
     set_servo_position(0,0);
	set_servo_position(2,0);
    msleep(1000);
    //go foward
     create_drive_direct(-500,-500);
    msleep(3550);
    //stop
    create_drive_direct(0,0);
    msleep(700);
    //put up scoop
    set_servo_position(0,up1);
	set_servo_position(2,up2);
    msleep(800);
    
     //go foward
     create_drive_direct(-500,-500);
     msleep(200);
   //put scoop down
    set_servo_position(0,0);
	set_servo_position(2,0);
    msleep(200);
    //move backward
       create_drive_direct(500,500);
     msleep(400);
   //put up scoop
    set_servo_position(0,up1);
	set_servo_position(2,up2);
    msleep(300);
      //move backward
       create_drive_direct(500,500);
     msleep(400);
      // do it again to pick up more things 
    
    //stop
    create_drive_direct(0,0);
    msleep(700);
    //go foward
     create_drive_direct(-500,-500);
     msleep(1000);
     //stop
    create_drive_direct(0,0);
    msleep(700);
    //put up scoop
    set_servo_position(0,up1);
	set_servo_position(2,up2);
    msleep(600);
    //go foward
     create_drive_direct(-500,-500);
     msleep(200);
      //put scoop down
    set_servo_position(0,0);
	set_servo_position(2,0);
    msleep(400);
    //move backward
       create_drive_direct(500,500);
     msleep(800);
   //stop
    create_drive_direct(0,0);
    msleep(700);
    //put scoop down
    set_servo_position(0,0);
	set_servo_position(2,0);

 
    
    
    
    
    
    
    
    
       
    
	
    
  create_disconnect();
  return 0;
}
