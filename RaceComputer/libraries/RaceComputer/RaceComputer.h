#ifndef RaceComputer_h
#define RaceComputer_h

#define PORT 0
#define STBD 1

#define DISPLAY_REFRESH  500 // Milliseconds
#define LOGGING_REFRESH 2000 // Milliseconds

#define SAMPLES 10;

class RaceComputer {
    public:
        RaceComputer();
        
        int getTack();
        
        int getHeading();
        int getHeelAngle();
        int getTrimAngle();
        
        int getWindAngle();
        int getTackingAngle();
        int getHeadintPort();
        int getHeadingStbd();
        
        float getLatitude();
        float getLongitude();
        
        int getSpeedOverGround();
        int getCourseOverGround();
        
    private:
        int tack = PORT;
        
        int heading[SAMPLES];
        int heelAngle[SAMPLES];
        int trimAngle[SAMPLES];
        
        int windAngle[SAMPLES];    // Caluculated from tack, heading, tacking angle
        int tackingAngle[SAMPLES]; // Preset boat tacking angle - used to calculate headingPort/Stbd
        int headingPort[SAMPLES];  // Tactical heading display  - Like Silva Racing Compass
        int headingStbd[SAMPLES];  // Tactical heading display  - Like Silva Racing Compass
        
        float latitude[SAMPLES];
        float longitude[SAMPLES];
        
        int speedOverGround[SAMPLES];
        int courseOverGround[SAMPLES];
        
        void updateHeading(int angle);
        void updateHeelAngle(int angle);
        void updateTrimAngle(int angle);
        
        void updateWindAngle(int angle);
        void updateTackingAngle(int angle);
        void updateHeadintPort(int angle);
        void updateHeadingStbd(int angle);
        
        void updateLatitude(float _latitude_);
        void updateLongitude(float _longitude_);
        
        void updateSpeedOverGround(int speed);
        void updateCourseOverGround(int angle);
}

#endif
