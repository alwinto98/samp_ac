	if(SERVER_INFO[playerid][SAMP_FUNC][2] == 0)
	{
		if(SERVER_INFO[playerid][SAMP_SET_VEHICLE] != GetPlayerVehicleID(playerid))
		{
			SERVER_INFO[playerid][SAMP_FUNC][2] = 
			SERVER_INFO[playerid][SAMP_WARN][2] = 1;
		}
		else 
		{
			if(SERVER_INFO[playerid][SAMP_TICK] > SERVER_INFO[playerid][SAMP_LAGG][2] + 3250)
			{
				SAMP_AC_SEND_WARNING_FOR_SCRIPT(playerid, "PutPlayerInVehicle", 52, 2);
			}
		}
	}