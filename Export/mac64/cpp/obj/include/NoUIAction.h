#ifndef INCLUDED_NoUIAction
#define INCLUDED_NoUIAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UIAction.h>
HX_DECLARE_CLASS0(NoUIAction)
HX_DECLARE_CLASS0(UIAction)


class HXCPP_CLASS_ATTRIBUTES  NoUIAction_obj : public ::UIAction_obj{
	public:
		typedef ::UIAction_obj super;
		typedef NoUIAction_obj OBJ_;
		NoUIAction_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NoUIAction_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NoUIAction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("NoUIAction"); }

};


#endif /* INCLUDED_NoUIAction */ 
