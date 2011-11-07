//
//  SSDirectory.h
//  SparkleShare
//
//  Created by Sergey Klimov on 07.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "SSFolderItem.h"

@interface SSDirectory : SSFolderItem
{
@private
    NSArray* items;
    int count; 
}
@property (readonly) NSArray* items;
@property (readonly) int count;
@end