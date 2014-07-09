package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/depthGuage.png", "assets/depthGuage.png");
			type.set ("assets/depthGuage.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/soccerBall.png", "assets/soccerBall.png");
			type.set ("assets/soccerBall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/standingSailor.png", "assets/standingSailor.png");
			type.set ("assets/standingSailor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sub.png", "assets/sub.png");
			type.set ("assets/sub.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/throttleControlBackground.png", "assets/throttleControlBackground.png");
			type.set ("assets/throttleControlBackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/throttleHandle.png", "assets/throttleHandle.png");
			type.set ("assets/throttleHandle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/verticlePipe.png", "assets/verticlePipe.png");
			type.set ("assets/verticlePipe.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/woodenBall.png", "assets/woodenBall.png");
			type.set ("assets/woodenBall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
