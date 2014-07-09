
class SetEnginePowerUIAction extends UIAction {

	var powerNormal:Float;



	public function new (nPowerNormal:Float){
		type = UIActionSetEnginePower;
		powerNormal = nPowerNormal;
		
	}

	public function getPowerNormal():Float{
		return powerNormal;
	}



}