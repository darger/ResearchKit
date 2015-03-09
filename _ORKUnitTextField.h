/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:12 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/_ORKCaretOptionalTextField.h>

@class NSString, UIColor, UILabel;

@interface _ORKUnitTextField : _ORKCaretOptionalTextField {

	NSString* _managedPlaceholder;
	NSString* _unitWithNumber;
	NSString* _unitWithPlaceholder;
	UIColor* _unitRegularColor;
	UIColor* _unitActiveColor;
	UIColor* _savedSuffixColor;
	NSString* _savedSuffixText;
	UILabel* _suffixLabel;
	BOOL _manageUnitAndPlaceholder;
	NSString* _unit;

}

@property (nonatomic,copy) NSString * unit;                              //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) BOOL manageUnitAndPlaceholder;              //@synthesize manageUnitAndPlaceholder=_manageUnitAndPlaceholder - In the implementation block
-(id)ork_createTextLabelWithTextColor:(id)arg1 ;
-(void)ork_setSuffix:(id)arg1 withColor:(id)arg2 ;
-(void)ork_updateSuffix:(id)arg1 ;
-(void)_updateManagedUnitAndPlaceholder;
-(void)_setPlaceholder:(id)arg1 ;
-(void)ork_updateSuffix:(id)arg1 withColor:(id)arg2 ;
-(double)_suffixWidthForBounds:(CGRect)arg1 ;
-(BOOL)isPlaceholderVisible;
-(CGRect)ork_suffixFrame;
-(void)setManageUnitAndPlaceholder:(BOOL)arg1 ;
-(BOOL)manageUnitAndPlaceholder;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(id)accessibilityValue;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
-(void)_textFieldDidBeginEditing:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
-(void)_textFieldDidEndEditing:(id)arg1 ;
@end

