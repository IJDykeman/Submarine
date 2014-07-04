package;
import openfl.Assets;
import flash.display.Sprite;
import flash.display.Bitmap;



class UIElement extends Sprite{
	public var bitmap:Bitmap;

	public function onClick(x:Int,y:Int) : UIAction{
	 	var result : UIAction;
	 	result = new NoUIAction();
		return result;
	}

}


