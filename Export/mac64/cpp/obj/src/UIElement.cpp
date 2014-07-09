#include <hxcpp.h>

#ifndef INCLUDED_NoUIAction
#include <NoUIAction.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIElement
#include <UIElement.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void UIElement_obj::__construct()
{
HX_STACK_FRAME("UIElement","new",0xa406e3ba,"UIElement.new","UIElement.hx",9,0xb06070f6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//UIElement_obj::~UIElement_obj() { }

Dynamic UIElement_obj::__CreateEmpty() { return  new UIElement_obj; }
hx::ObjectPtr< UIElement_obj > UIElement_obj::__new()
{  hx::ObjectPtr< UIElement_obj > result = new UIElement_obj();
	result->__construct();
	return result;}

Dynamic UIElement_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIElement_obj > result = new UIElement_obj();
	result->__construct();
	return result;}

::UIAction UIElement_obj::onClick( int x,int y){
	HX_STACK_FRAME("UIElement","onClick",0x46e4e303,"UIElement.onClick","UIElement.hx",12,0xb06070f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(13)
	::UIAction result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(14)
	::NoUIAction _g = ::NoUIAction_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	result = _g;
	HX_STACK_LINE(15)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(UIElement_obj,onClick,return )

bool UIElement_obj::pointIsInRect( Float pX,Float pY,::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("UIElement","pointIsInRect",0x02978f7d,"UIElement.pointIsInRect","UIElement.hx",19,0xb06070f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pX,"pX")
	HX_STACK_ARG(pY,"pY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(19)
	return (bool((bool((bool((pX >= rect->x)) && bool((pY >= rect->y)))) && bool((pX <= (rect->x + rect->width))))) && bool((pY <= (rect->y + rect->height))));
}


HX_DEFINE_DYNAMIC_FUNC3(UIElement_obj,pointIsInRect,return )

Void UIElement_obj::onResize( int nWidth,int nHeight){
{
		HX_STACK_FRAME("UIElement","onResize",0xbf8ed6d9,"UIElement.onResize","UIElement.hx",22,0xb06070f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nWidth,"nWidth")
		HX_STACK_ARG(nHeight,"nHeight")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIElement_obj,onResize,(void))


UIElement_obj::UIElement_obj()
{
}

void UIElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIElement);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIElement_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pointIsInRect") ) { return pointIsInRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIElement_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(UIElement_obj,bitmap),HX_CSTRING("bitmap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmap"),
	HX_CSTRING("onClick"),
	HX_CSTRING("pointIsInRect"),
	HX_CSTRING("onResize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIElement_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIElement_obj::__mClass,"__mClass");
};

#endif

Class UIElement_obj::__mClass;

void UIElement_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UIElement"), hx::TCanCast< UIElement_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void UIElement_obj::__boot()
{
}

