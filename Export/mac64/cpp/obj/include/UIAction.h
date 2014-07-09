#ifndef INCLUDED_UIAction
#define INCLUDED_UIAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(UIAction)
HX_DECLARE_CLASS0(UIActionType)


class HXCPP_CLASS_ATTRIBUTES  UIAction_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UIAction_obj OBJ_;
		UIAction_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIAction_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIAction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIAction"); }

		::UIActionType type;
};


#endif /* INCLUDED_UIAction */ 
