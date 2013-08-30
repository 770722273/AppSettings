//
//  BIDFlipsideViewController.h
//  AppSettings
//
//  Created by huanghaohua on 13-8-30.
//  Copyright (c) 2013年 huazi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BIDFlipsideViewController;

@protocol BIDFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(BIDFlipsideViewController *)controller;
@end

@interface BIDFlipsideViewController : UIViewController

@property (weak, nonatomic) id <BIDFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
