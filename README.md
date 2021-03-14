# Smart-System-for-Pressure-Cooker

People with a hearing disability or busy housewives are sometimes unable to keep track of the how many times the pressure cooker has whistled. This Arduino-based device will assist them to overcome the problem.

This is an Arduino-based project to help hearing disabled persons or housewives keep track of the pressure cooker's whistling. Whenever the cook is not around, this device will record the number of times the pressure cooker whistles using a sound sensor. And whenever that number matches with predefined number, this device will start beeping thus alerting the user

Working:-
1.First, the user has to preset the desired counter for the pressure cooker (ex. 2, 4, 5...up to 9) through a push button attached to the device.

2. Now the device will consider any whistle sound as input and start increasing its internal counter.

3.Whenever the pressure cooker whistles, the counter increases.

4.if it matches with the preset number (we set before using the push button switch), the buzzer will get triggered and alert the user that desired count has been reached by giving alarm through buzzer.

5. Then message will send to User through bluetooth module
