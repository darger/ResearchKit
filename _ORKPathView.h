/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface _ORKPathView : UIView {

	UIBezierPath* _path;
	UIColor* _color;
	CGSize _canvasSize;
	UIEdgeInsets _canvasMargins;

}

@property (nonatomic,readonly) UIEdgeInsets canvasMargins;              //@synthesize canvasMargins=_canvasMargins - In the implementation block
@property (nonatomic,readonly) CGSize canvasSize;                       //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,readonly) UIBezierPath * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) UIColor * color;                         //@synthesize color=_color - In the implementation block
-(id)initWithBezierPath:(id)arg1 canvasSize:(CGSize)arg2 canvasMargins:(UIEdgeInsets)arg3 color:(id)arg4 ;
-(UIEdgeInsets)canvasMargins;
-(CGSize)canvasSize;
-(void)drawRect:(CGRect)arg1 ;
-(UIBezierPath *)path;
-(void)tintColorDidChange;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

