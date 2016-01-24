#ifndef RaceComputer_h
#define RaceComputer_h

#define PORT 0
#define STBD 1

#define DISPLAY_REFRESH  500 // Milliseconds
#define LOGGING_REFRESH 2000 // Milliseconds

class RaceComputer {
  
  public:
  
    RaceComputer();
  
  private:
  
  int tack = PORT;
  
  int heading   = 0;
  int heelAngle = 0;
  int trimAngle = 0;
  
  int windAngle    = 0;  // Caluculated from tack, heading, tacking angle
  int tackingAngle = 90; // Preset boat tacking angle - used to calculate headingPort/Stbd
  int headingPort  = 0;  // Tactical heading display  - Like Silva Racing Compass
  int headingStbd  = 0;  // Tactical heading display  - Like Silva Racing Compass
  
  int latitude  = 0;
  int longitude = 0;
  
  int speedOverGround  = 0;
  int courseOverGround = 0;
  
  void setHeading(int angle);
  void setHeelAngle(int angle);
  void setTrimAngle(int angle);
  
  void setWindAngle(int angle);
  void setTackingAngle(int angle);
  void setHeadintPort(int angle);
  void setHeadingStbd(int angle);
  
  void setLatitude(float _latitude_);
  void setLongitude(float _longitude_);
  
  void setSpeedOverGround(int speed);
  void setCourseOverGround(int angule);
  
}

#endif
