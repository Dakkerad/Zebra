//
//  SettingsTableViewController.h
//  Zebra
//
//  Created by midnightchips on 6/22/19.
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZBDarkModeHelper.h>
#import <Extensions/UIColor+GlobalColors.h>
@interface ZBSettingsTableViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UIView *headerContainer;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@end
