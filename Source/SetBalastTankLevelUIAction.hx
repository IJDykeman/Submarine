class SetBalastTankLevelUIAction extends UIAction {

	var levelNormal:Float;

	public function new (nLevelNormal:Float){
		type = UIActionSetBalastTankLevel;
		levelNormal = nLevelNormal;
	}

	public function getLevelNormal():Float{
		return levelNormal;
	}

}