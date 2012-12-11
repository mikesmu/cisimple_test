//
//  TPFlipsideViewController.h
//  cisimple
//
//  Created by Michał Smulski on 11.12.2012.
//  Copyright (c) 2012 tap. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TPFlipsideViewController;

@protocol TPFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(TPFlipsideViewController *)controller;
@end

@interface TPFlipsideViewController : UIViewController

@property (weak, nonatomic) id <TPFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
