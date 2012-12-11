//
//  TPMainViewController.m
//  cisimple
//
//  Created by Michał Smulski on 11.12.2012.
//  Copyright (c) 2012 tap. All rights reserved.
//

#import "TPMainViewController.h"

@interface TPMainViewController ()

@end

@implementation TPMainViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Flipside View

- (void)flipsideViewControllerDidFinish:(TPFlipsideViewController *)controller
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (IBAction)showInfo:(id)sender
{    
    TPFlipsideViewController *controller = [[TPFlipsideViewController alloc] initWithNibName:@"TPFlipsideViewController" bundle:nil];
    controller.delegate = self;
    controller.modalTransitionStyle = UIModalTransitionStyleFlipHorizontal;
    [self presentViewController:controller animated:YES completion:nil];
}

@end
