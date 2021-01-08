  // It is assumed that all the sensors are of the same type.
  // This is why the maximum distance is defined only once. 
  // For each sensor you can specify:
  //   - The name of the topic to which it should publish.
  //   - The number of the trigger pin.
  //   - The number of the echo pin. 
  // -
  // -
  //  # Maximum distance in millimeters
  //  max_distance: 4000
  //  sensors:
  //  -
  //   topic_name: "sensor-1-range"
  //   trigger: 12
  //   echo: 13

// Maximum distance in millimeters
#define max_distance 4000

 class Sensor {   
  public:         
    String topic; 
    int trigger;  
    int echo;
    Sensor(String tp, int tr, int e) {
      topic = tp;
      trigger = tr;
      echo = e;
    }

};

Sensor sensors[] = {Sensor("sensor_range_1", 12, 13), Sensor("sensor_range_1", 12, 13)};