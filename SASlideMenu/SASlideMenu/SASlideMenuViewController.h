//
//  SASlideMenuViewController.h
//  SASlideMenu
//
//  Created by Stefano Antonelli on 1/17/13.
//  Copyright (c) 2013 Stefano Antonelli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SASlideMenuDataSource.h"
#import "SASlideMenuDelegate.h"

@class SASlideMenuRootViewController;

@interface SASlideMenuViewController : UITableViewController<UIGestureRecognizerDelegate>

@property (weak, nonatomic) SASlideMenuRootViewController* rootController;
@property (weak, nonatomic) NSObject<SASlideMenuDataSource>* slideMenuDataSource;
@property (weak, nonatomic) NSObject<SASlideMenuDelegate>* slideMenuDelegate;

-(void)selectContentAtIndexPath:(NSIndexPath *)indexPath scrollPosition:(UITableViewScrollPosition)scrollPosition;
-(void) revealLeftMenu;

-(void) revealRightMenu;

@end
