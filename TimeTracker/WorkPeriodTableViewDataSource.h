//
//  WorkPeriodTableViewDataSource.h
//  TimeTracker
//
//  Created by Taylor Mott on 16 May 15.
//  Copyright (c) 2015 Mott Applications. All rights reserved.
//

@import Foundation;
@import UIKit;
#import "Project.h"

@interface WorkPeriodTableViewDataSource : NSObject <UITableViewDataSource>

@property (strong, nonatomic) Project *project;

@end