configuration _SenseToLeds_SenseToLeds_node2_MicaCompositeActor0 {
}
implementation {
components Main, TimerC, IntToLeds, SenseToInt, DemoSensorC;
SenseToInt.TimerControl -> TimerC.StdControl;
SenseToInt.Timer -> TimerC.Timer[unique("Timer")];
SenseToInt.IntOutput -> IntToLeds.IntOutput;
Main.StdControl -> IntToLeds.StdControl;
Main.StdControl -> SenseToInt.StdControl;
SenseToInt.ADC -> DemoSensorC.ADC;
SenseToInt.ADCControl -> DemoSensorC.StdControl;
}
