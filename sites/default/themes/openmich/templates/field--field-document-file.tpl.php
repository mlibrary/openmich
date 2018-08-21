<?php
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>

<?php
$uri = $item['#file']->uri;
$target='';
$file_url = file_create_url($uri);
$mime = file_get_mimetype($item['#file']->uri);
$link_alt='';
//dpm($mime);
switch ($mime):
case 'application/pdf':
	$file_icon = 'fa-file-pdf-o';
	$link_alt='PDF';
	$target='target="_blank"';
	break;
case 'application/msword':
	$file_icon = 'fa-file-word-o';
	$link_alt='Word';
	break;
case 'text/plain':
	$file_icon = 'fa-file-text-o';
	$link_alt = 'Text';
	break;
case 'application/vnd.ms-powerpoint':
	$file_icon = 'fa-file-powerpoint-o';
	$link_alt = 'PowerPoint';
	break;
case 'application/vnd.ms-excel':
	$file_icon='fa-file-excel-o';
	$link_alt = 'Excel';
	break;
case 'audio/x-mpeg-3':
case 'audio/mpeg':
case 'video/mpeg':
case 'video/x-mpeg':
case 'audio/mpeg3':
	$file_icon='fa-file-audio-o';
	$link_alt = 'MP3';
	break;
case 'video/mp4':
	$file_icon='fa-film';
	$link_alt='MP4';
	break;
case 'application/zip':
case 'application/x-compressed':
case 'application/x-zip-compressed':
	$file_icon='fa-file-archive-o';
	$link_alt ='Zip';
	break;
case 'application/rtf':
case 'application/x-rtf':
case 'text/richtext':
	$file_icon='fa-file-o';
	$link_alt = 'RTF';
	break;
case 'application/x-indesign':
	$file_icon='fa-file-code-o';
	$link_alt = 'INDD';
	break;
default:
	if (strpos($mime,'wordprocessingml.document') !== false):
		$file_icon = 'fa-file-word-o';
		$link_alt='Word';
	elseif (strpos($mime,'presentationml.presentation') !== false):
		$file_icon = 'fa-file-powerpoint-o';
		$link_alt='PowerPoint';
	elseif (strpos($mime, 'officedocument.spreadsheetml') !== false):
		$file_icon='fa-file-excel-o';
		$link_alt='Excel';
	else:
		$file_icon = 'fa-file-text-o';
		$link_alt='Text';
	endif;

endswitch;
if (empty($file_icon)):
	$file_icon = 'fa-file-text-o';
endif;
?>
      <div class="field-item >"<?php print $item_attributes[$delta]; ?>>
      	<a href="<?php print $file_url; ?>" class="fa <?php print $file_icon; ?>" <?php print $target;?> title="<?php print $link_alt; ?>"><span class="element-invisible">$item['#file']->filename</span></a>
      </div>
    <?php endforeach; ?>
  </div>
</div>

