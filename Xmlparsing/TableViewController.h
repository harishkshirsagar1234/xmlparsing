//
//  TableViewController.h
//  Xmlparsing
//
//  Created by Felix-ITS 012 on 04/11/16.
//  Copyright © 2016 Felix-Harish. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController <NSXMLParserDelegate>

@property(nonatomic,retain)NSMutableArray *plantarray;

@property(nonatomic,retain)NSXMLParser *saxparser;

@property(nonatomic,retain)NSMutableString *tempstring;

@end
