package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/asuka-click.png", "img/asuka-click.png");
			type.set ("img/asuka-click.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/asuka.png", "img/asuka.png");
			type.set ("img/asuka.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/booster.png", "img/booster.png");
			type.set ("img/booster.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/click.png", "img/click.png");
			type.set ("img/click.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/matt.png", "img/matt.png");
			type.set ("img/matt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/money.png", "img/money.png");
			type.set ("img/money.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-cheerleader.png", "img/shop-cheerleader.png");
			type.set ("img/shop-cheerleader.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-close.png", "img/shop-close.png");
			type.set ("img/shop-close.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-evangelion.png", "img/shop-evangelion.png");
			type.set ("img/shop-evangelion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-leia.png", "img/shop-leia.png");
			type.set ("img/shop-leia.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-maid.png", "img/shop-maid.png");
			type.set ("img/shop-maid.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-mario.png", "img/shop-mario.png");
			type.set ("img/shop-mario.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-mermaid.png", "img/shop-mermaid.png");
			type.set ("img/shop-mermaid.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-none.png", "img/shop-none.png");
			type.set ("img/shop-none.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-pikachu.png", "img/shop-pikachu.png");
			type.set ("img/shop-pikachu.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop-unicorn.png", "img/shop-unicorn.png");
			type.set ("img/shop-unicorn.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/shop.png", "img/shop.png");
			type.set ("img/shop.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Untitled-2.png", "img/Untitled-2.png");
			type.set ("img/Untitled-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
