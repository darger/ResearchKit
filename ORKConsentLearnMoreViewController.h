/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWebView, NSString;

@interface ORKConsentLearnMoreViewController : UIViewController {

	UIWebView* _webView;
	NSString* _content;

}

@property (nonatomic,retain) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * content;                 //@synthesize content=_content - In the implementation block
-(id)initWithHtmlContent:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
@end

