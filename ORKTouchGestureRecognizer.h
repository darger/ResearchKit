/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:12 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol ORKTouchRecordingDelegate;
@interface ORKTouchGestureRecognizer : UIGestureRecognizer {

	id<ORKTouchRecordingDelegate> _eventDelegate;

}

@property (assign,nonatomic,__weak) id<ORKTouchRecordingDelegate> eventDelegate;              //@synthesize eventDelegate=_eventDelegate - In the implementation block
-(void)reportTouches:(id)arg1 ;
-(id)init;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setEventDelegate:(id<ORKTouchRecordingDelegate>)arg1 ;
-(id<ORKTouchRecordingDelegate>)eventDelegate;
@end
