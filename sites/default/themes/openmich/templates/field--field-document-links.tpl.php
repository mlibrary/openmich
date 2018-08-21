<?php
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php if (!$label_hidden): ?>
        <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
    <?php endif; ?>
    <div class="field-items"<?php print $content_attributes; ?>>
        <?php foreach ($items as $delta => $item): ?>
            <?php $ekey=key($item['entity']['paragraphs_item']); ?>

        <?php $linktype=$item['entity']['paragraphs_item'][$ekey]['field_document_linktype'][0]['#markup']; ?>
        <?php switch($linktype):
            case 'YouTube':
                $link_icon='fa-youtube';
                $link_alt="YouTube";
            break;
            case 'External';
                $link_icon='fa-external-link';
                $link_alt="External link";
            break;
            case 'Deep Blue':
                $link_icon='fa-archive';
                $link_alt='Deep Blue Link';
            break;
            case 'PDF':
                $link_icon='fa-file-pdf-o';
                $link_alt='PDF';
            break;
            case 'DOC':
                $link_icon='fa-file-word-o';
                $link_alt='Word';
            break;
            case 'PPT':
                $link_icon='fa-file-powerpoint-o';
                $link_alt='PowerPoint';
            break;
            case 'TXT':
                $link_icon='fa-file-text-o';
                $link_alt='Text';
            break;
            case 'XLS':
                $link_icon='fa-file-excel-o';
                $link_alt='Excel';
            break;
            case 'RTF':
                $link_icon='fa-file-o';
                $link_alt='RTF';
            break;
            case 'ZIP':
                $link_icon='fa-file-archive-o';
                $link_alt='Zip';
            break;
            case 'MP3':
                $link_icon='fa-file-audio-o';
                $link_alt="MP3";
            break;
            case 'MP4':
                $link_icon=$file_icon='fa-film';
                $link_alt='MP4';
            break;
            case 'INDD':
                $link_icon='fa-file-code-o';
                $link_alt='INDD';
            break;
            case 'Quicktime':
                $link_icon='fa-file-video-o';
                $link_alt='Quicktime';
            break;
            case 'EXE':
                $link_icon='fa fa-file-code-o';
                $link_alt='EXE';
            break;
            case 'SRT':
                $link_icon='fa-file-video-o';
                $link_alt='SRT';
            break;
            default:
                $link_icon='fa-external-link';
                $link_alt='link';
        endswitch; ?>

        <?php if ( (isset($item['entity']['paragraphs_item'][$ekey]) ) &&
                (isset($item['entity']['paragraphs_item'][$ekey]['field_document_link'])) ) : ?>
            <?php $url = ($item['entity']['paragraphs_item'][$ekey]['field_document_link'][0]['#element']['url']); ?>
                <div class="field-item >"<?php print $item_attributes[$delta]; ?>>
                    <a href="<?php print $url; ?>" class="fa <?php print $link_icon; ?>" target="_blank" title="<?php print $link_alt;?>"><span class="element-invisible"><?php print $link_alt; ?>/span></a>
                </div>
        <?php endif; ?>

        <?php endforeach; ?>
    </div>
</div>