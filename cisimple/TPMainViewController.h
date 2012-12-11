//
//  TPMainViewController.h
//  cisimple
//
//  Created by Michał Smulski on 11.12.2012.
//  Copyright (c) 2012 tap. All rights reserved.
//

#import "TPFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface TPMainViewController : UIViewController <TPFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)showInfo:(id)sender;

@end
