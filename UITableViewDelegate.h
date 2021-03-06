/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITableViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
-(long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;

@end

