class SetBalastTankLevelUIAction extends UIAction {

	var levelNormal:Float;
	var bowOrStern:ShipEnd;


	public function new (nLevelNormal:Float, nBowOrStern:ShipEnd){
		type = UIActionSetBalastTankLevel;
		levelNormal = nLevelNormal;
		bowOrStern = nBowOrStern;
	}

	public function getLevelNormal():Float{
		return levelNormal;
	}

	public function getShipEnd():ShipEnd{
		return bowOrStern;
	}

}