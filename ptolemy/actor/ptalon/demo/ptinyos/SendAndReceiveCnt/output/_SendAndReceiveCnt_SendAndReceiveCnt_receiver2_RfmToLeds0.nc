configuration _SendAndReceiveCnt_SendAndReceiveCnt_receiver2_RfmToLeds0 {
}
implementation {
components Main, IntToLeds, RfmToInt;
RfmToInt.IntOutput -> IntToLeds.IntOutput;
Main.StdControl -> IntToLeds.StdControl;
Main.StdControl -> RfmToInt.StdControl;
}
