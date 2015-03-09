/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <UIKit/UITextView.h>
#import <ResearchKit/ORKDefaultFont.h>

@class UIFont, UIColor, UILabel, NSString;

@interface ORKAnswerTextView : UITextView <ORKDefaultFont> {

	UIFont* _fieldFont;
	UIColor* _fieldTextColor;
	UILabel* _placeHolder;

}

@property (nonatomic,retain) UIFont * fieldFont;                    //@synthesize fieldFont=_fieldFont - In the implementation block
@property (nonatomic,retain) UIColor * fieldTextColor;              //@synthesize fieldTextColor=_fieldTextColor - In the implementation block
@property (nonatomic,retain) UILabel * placeHolder;                 //@synthesize placeHolder=_placeHolder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(void)_init_ORKAnswerTextView;
-(UIFont *)fieldFont;
-(void)setFieldFont:(UIFont *)arg1 ;
-(void)setFieldTextColor:(UIColor *)arg1 ;
-(UIColor *)fieldTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFont:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)_updateAppearance;
-(UILabel *)placeHolder;
-(void)setPlaceHolder:(UILabel *)arg1 ;
@end

