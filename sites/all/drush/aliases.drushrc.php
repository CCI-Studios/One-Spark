<?php

$aliases['dev'] = array(
	'uri'=> 'dev.one-spark.ca',
	'root' => '/home/onespark/subdomains/dev/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'onespark',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);


$aliases['live'] = array(
	'uri'=> 'live.one-spark.ca',
	'root' => '/home/onespark/subdomains/live/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'onespark',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);
