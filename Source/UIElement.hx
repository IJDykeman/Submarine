package;
import openfl.Assets;
import flash.display.Sprite;
import flash.display.Bitmap;
import flash.geom.Rectangle;



class UIElement extends Sprite{
	public var bitmap:Bitmap;

	public function onClick(x:Int,y:Int) : UIAction{
	 	var result : UIAction;
	 	result = new NoUIAction();
		return result;
	}

	public function pointIsInRect(pX:Float,pY:Float,rect:Rectangle):Bool{
		return (pX>=rect.x && pY>=rect.y && pX<=rect.x+rect.width && pY<=rect.y+rect.height);
	}

	public function onResize(nWidth:Int,nHeight:Int){

	}




}


