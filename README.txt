This is a project to retrieve email status information using the SocketLabs API.

For examples from SocketLabs themselves, refer to their github repo: https://github.com/socketlabs/

------------------------------

Set up for the feeds:
	Upon installation, tabs will appear at the top of the home page. Each of these tabs
	refers to different feeds, or different API calls. You can click on a tab, click import,
	and enter the URL required for the API call. The format for the URL should be something
	like: https://username:password@api.socketlabs.com/...
	You can refer to https://www.socketlabs.com/od/api for the API reference.

------------------------------

Currently the importing/expiring of nodes requires a few changes to the Feeds module.
These changes are all minor, mostly they consist of adding an option to import/expire 
every 5 minutes. The changes needed are as follows:

Changes to Feeds module:

  In FeedsImporter.inc (includes folder)
    Line 93 changed to: $job[‘period’]=$this->processor->expiryTime();
    Line 242 changed expire_period to 300
    Line 279 added 300 to array

  In FeedsNodeProcessor.inc (plugins folder)
    Line 152 added 300 to array

------------------------------

The crontab is used, in this case, to make cron run every 6 minutes. When cron runs, nodes will be deleted if they have expired and import new nodes if it is time.
Crontab Configuration:

cd to /sites/all/modules
crontab -e
add following line: */6 * * * * wget -O - -q http://yoursitename:8080/cron.php

If this does not work due to permissions (check recent log messages to confirm), go to the status report and look for the url for updating cron externally.
This will have a long token to append after the cron.php portion of the url used to authenticate your cron job.
